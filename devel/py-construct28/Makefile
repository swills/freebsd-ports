# Created by: Piotr Florczyk <p.florczyk@adminworkshop.pl>
# $FreeBSD: head/devel/py-construct28/Makefile 439617 2017-04-28 17:17:42Z shaun $

PORTNAME=	construct
PORTVERSION=	2.8.11
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	28

MAINTAINER=	shaun@FreeBSD.org
COMMENT=	Python module for parsing and building of data structures

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
