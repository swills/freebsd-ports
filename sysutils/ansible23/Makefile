# Created by: Nikolai Lifanov <lifanov@FreeBSD.org>
# $FreeBSD: head/sysutils/ansible23/Makefile 455204 2017-11-30 15:32:44Z lifanov $

PORTVERSION=	2.3.2.0
PKGNAMESUFFIX=	23

CONFLICTS=	ansible-* ansible1-*

MASTERDIR=	${.CURDIR}/../ansible
DISTINFO_FILE=	${.CURDIR}/distinfo

PLIST_FILES=	man/man1/ansible-console.1.gz \
		man/man1/ansible-doc.1.gz \
		man/man1/ansible-galaxy.1.gz \
		man/man1/ansible-playbook.1.gz \
		man/man1/ansible-pull.1.gz \
		man/man1/ansible-vault.1.gz \
		man/man1/ansible.1.gz

EXTRA_PATCHES=

.include "${MASTERDIR}/Makefile"
