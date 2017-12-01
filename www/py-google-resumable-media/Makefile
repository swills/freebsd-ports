# $FreeBSD: head/www/py-google-resumable-media/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	google-resumable-media
PORTVERSION=	0.2.3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Utilities for Google Media Downloads and Resumable Uploads

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}

USES=		python
USE_PYTHON=	distutils concurrent autoplist

.include <bsd.port.mk>
