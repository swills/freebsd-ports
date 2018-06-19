# Created by: Frank Laszlo <laszlof@vonostingroup.com>
# $FreeBSD: head/security/md5deep/Makefile 472706 2018-06-18 19:03:03Z linimon $

PORTNAME=	md5deep
PORTVERSION=	4.4
CATEGORIES=	security

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	Program to compute various message digests recursively

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

GH_ACCOUNT=	jessek
GH_PROJECT=	hashdeep
GH_TAGNAME=	cd2ed74

USES=		autoreconf compiler:c++11-lang gmake
USE_GITHUB=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
