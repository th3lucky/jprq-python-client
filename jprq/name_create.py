import names, random
def get_random_user():
	return names.get_full_name().replace(" ","-").lower() +"-"+str(random.randint(0,65355))
