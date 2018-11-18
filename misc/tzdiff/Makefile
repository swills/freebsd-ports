# Created by: Naito Yuichiro <naito.yuichiro@gmail.com>
# $FreeBSD: head/misc/tzdiff/Makefile 485061 2018-11-16 07:31:17Z tobik $

PORTNAME=	tzdiff
PORTVERSION=	0.91
CATEGORIES=	misc

MAINTAINER=	naito.yuichiro@gmail.com
COMMENT=	Showing time pairs between target timezone and localtime

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	belgianbeer

PLIST_FILES=	bin/tzdiff

NO_ARCH=	yes
NO_BUILD=	yes

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/tzdiff \
	    ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
