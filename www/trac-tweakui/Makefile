# Created by: glarkin
# $FreeBSD: head/www/trac-tweakui/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	tweakui
PORTVERSION=	0.1.7413
PORTREVISION=	3
CATEGORIES=	www devel python
MASTER_SITES=	http://www.sourcehosting.net/freebsd/distfiles/ \
		LOCAL/glarkin
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-${PORTVERSION}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Easily tweak Trac pages with JavaScript expressions

RUN_DEPENDS=	tracd:www/trac

USES=		dos2unix python:2.7 zip
DOS2UNIX_REGEX=	.*\.(css|html|js|py|txt)$
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

EXAMPLESDIR=	${PREFIX}/share/examples/${PKGNAMEPREFIX}${PORTNAME}
PORTEXAMPLES=	*

SUB_FILES=	pkg-message

WRKSRC=		${WRKDIR}/trac${PORTNAME}plugin/0.11

post-install:
	cd ${WRKSRC}/tractweakui/htdocs && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
