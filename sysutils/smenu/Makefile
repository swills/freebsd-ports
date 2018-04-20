# $FreeBSD: head/sysutils/smenu/Makefile 467544 2018-04-17 00:12:24Z dbaio $

PORTNAME=	smenu
DISTVERSIONPREFIX=	v
DISTVERSION=	0.9.12-7
DISTVERSIONSUFFIX=	-g0ff0326
CATEGORIES=	sysutils

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Terminal utility to interactively filter text

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

USES=	localbase ncurses:port

USE_GITHUB=	yes
GH_ACCOUNT=	p-gen

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/smenu \
		man/man1/smenu.1.gz

.include <bsd.port.mk>
