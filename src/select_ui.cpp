						try {
							*dirList=dopen(currentDir);
							if (dirList.Length==0) {
								dispTxt("Empty directory!", new NotGX2Color(255, 32, 32, 255), 48, 1, 1, 427, 240);
							}
						} catch {
							dispTxt("Cannot load directory!", new NotGX2Color(255, 32, 32, 255), 48, 1, 1, 427, 240);
						}
