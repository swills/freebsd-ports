# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: head/devel/gittrac/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	gittrac
CATEGORIES=	devel

COMMENT=	Web-Based Bug And Patch-Set Tracking System For Git

RUN_DEPENDS=	git>=0:devel/git

MASTERDIR=	${.CURDIR}/../cvstrac
MAKE_ARGS=	APPNAME=gittrac
PKGMESSAGE=	${.CURDIR}/pkg-message

.include "${MASTERDIR}/Makefile"
