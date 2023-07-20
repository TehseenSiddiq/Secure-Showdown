using System;
using UnityEngine;

namespace ES3Types
{
	[UnityEngine.Scripting.Preserve]
	[ES3PropertiesAttribute("spriteSheet")]
	public class ES3UserType_SpriteAsset : ES3ScriptableObjectType
	{
		public static ES3Type Instance = null;

		public ES3UserType_SpriteAsset() : base(typeof(UnityEngine.TextCore.Text.SpriteAsset)){ Instance = this; priority = 1; }


		protected override void WriteScriptableObject(object obj, ES3Writer writer)
		{
			var instance = (UnityEngine.TextCore.Text.SpriteAsset)obj;
			
			writer.WritePrivatePropertyByRef("spriteSheet", instance);
		}

		protected override void ReadScriptableObject<T>(ES3Reader reader, object obj)
		{
			var instance = (UnityEngine.TextCore.Text.SpriteAsset)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					
					case "spriteSheet":
					instance = (UnityEngine.TextCore.Text.SpriteAsset)reader.SetPrivateProperty("spriteSheet", reader.Read<UnityEngine.Texture>(), instance);
					break;
					default:
						reader.Skip();
						break;
				}
			}
		}
	}


	public class ES3UserType_SpriteAssetArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3UserType_SpriteAssetArray() : base(typeof(UnityEngine.TextCore.Text.SpriteAsset[]), ES3UserType_SpriteAsset.Instance)
		{
			Instance = this;
		}
	}
}