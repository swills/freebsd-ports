# $FreeBSD: head/sysutils/ansible26/Makefile 496115 2019-03-18 00:28:57Z lifanov $

PORTVERSION=	2.6.15
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
