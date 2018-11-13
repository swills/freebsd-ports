# $FreeBSD: head/sysutils/ansible26/Makefile 484164 2018-11-05 02:07:09Z lifanov $

PORTVERSION=	2.6.7
PKGNAMESUFFIX=	26

CONFLICTS=	ansible-* \
		ansible1-* \
		ansible23-* \
		ansible24-* \
		ansible25-*

MASTERDIR=	${.CURDIR}/../ansible
DISTINFO_FILE=	${.CURDIR}/distinfo

EXTRA_PATCHES=	${FILESDIR}/extra-patch-sesu

.include "${MASTERDIR}/Makefile"
