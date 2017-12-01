# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/audio/py-discogs-client/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	discogs-client
PORTVERSION=	2.2.1
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	stiginge@pvv.org
COMMENT=	Python interface to Discogs website

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}oauthlib>=0:security/py-oauthlib@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
