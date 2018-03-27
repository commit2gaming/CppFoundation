# Contribute

Welcome to open-source contribution. :smile_cat::tada::fireworks:

## Ways to Contribute

* File an [issue](https://github.com/commit2gaming/CppFoundation/issues) if:
	* you think the content on [foundation](https://github.com/commit2gaming/CppFoundation) is incomplete
	* you are having trouble with using the ressources


* Find your mission
	* Checkout some of the existing [issues](https://github.com/commit2gaming/CppFoundation/issues) and see if there is something that you wish to tackle
	* See if someone is already working on that problem
	* If you find a problem and nobody is working on it, let everybody knows how you would approach the problem


* Do your magic
	* Set up your [working environment](#Working-Environment) (described below :arrow_down:) and send a [pull request](https://github.com/commit2gaming/CppFoundation/docs/PULL_REQUEST.md)
	* Don't forget to checkout our [C++ Coding Standards](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/docs/C++_CODING_STANDARD.md) and [CONDUCT](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/docs/CONDUCT.md) code.


[Star GitHub](https://github.com/commit2gaming/CppFoundation) repo if you :heart_eyes_cat: like it; if you didn't, :pouting_cat: [submit an issue](https://github.com/commit2gaming/CppFoundation/issues)


You can also find [more useful stuff](#More-useful-stuff) in the end


## Working Environment
Here you will find the steps to contribute to this repo:
1. [Fork](https://help.github.com/articles/fork-a-repo/) the repository
	* 	Click [fork] on [CppFoundation](https://github.com/commit2gaming/CppFoundation)

2. [Clone](#Clone) this repository from the terminal
	* Create a local working directory from the terminal in you computer
	```sh
	$ mkdir -p /path/where/I/want/CppFoundation/folder
	$ cd /path/where/I/want/CppFoundation/folder
	```
	* Create a local clone of your fork
	```sh
	$ git clone https://github.com/YOUR-USERNAME/CppFoundation
	```
	* Check if it works
	```sh
	cd CppFoundation
	git remote -v
	```
	* And expect something like
	```sh
	origin  https://github.com/YOUR_USERNAME/YOUR_FORK.git (fetch)
	origin  https://github.com/YOUR_USERNAME/YOUR_FORK.git (push)
	```

3. Sync your fork with the original repo
	* Setup git so you can send pull requests to CppFoundation in the future
	```sh
	$ git remote add upstream  https://github.com/commit2gaming/CppFoundation.git
	```
	* Check if works
	```sh
	git remote -v
	```
	* And you shall get
	```sh
	origin    https://github.com/YOUR_USERNAME/YOUR_FORK.git (fetch)
	origin    https://github.com/YOUR_USERNAME/YOUR_FORK.git (push)
	upstream  https://github.com/ORIGINAL_OWNER/ORIGINAL_REPOSITORY.git (fetch)
	upstream  https://github.com/ORIGINAL_OWNER/ORIGINAL_REPOSITORY.git (push)
	```

4. Do some work
	* Create a new branch so you can tweak the code locally
	```sh
	$ git checkout -b <your_work_branch>
	```
	* Do one specific work and stage your changes
	```sh
	$ git add <file_created_or_modified>
	```
	* ... then commit
	```sh
	$ git commit -m "<leave a meaningful message>"
	```
	* Use [rebase](https://help.github.com/articles/about-git-rebase/) to unclutter your commits, if necessary
	* Make sure your master is up-to-date
	```sh
	$ git pull upstream master
	```
	* Then push your branch to your remote repository
	```sh
	$ git push origin <your_work_branch>
	```

5. Discuss fine tunning of your contribution on a [Pull Request (PR)](https://help.github.com/articles/about-pull-requests/)


## More useful stuff :books:
What we believe (and where we are at) to be a non-extensive list of [C++ FOUNDATIONS](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/FOUNDATIONS.md).
See how this repo can be
[USEFUL](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/docs/USEFUL.md).

Would like to give your *contribution to open-source code*?
Read the  [CONTRIBUTE](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/docs/CONTRIBUTE.md) guide.
Our
[C++ Coding Standards](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/docs/C++_CODING_STANDARD.md) and
[CONDUCT](https://github.com/commit2gaming/CppFoundation/tree/master/Cpp/docs/CONDUCT.md) code will provide some important information.
