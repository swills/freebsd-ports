# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: head/www/py-pyramid_rpc/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	pyramid_rpc
PORTVERSION=	0.8
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	RPC support for the Pyramid web framework

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyramid>=0:www/py-pyramid@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
