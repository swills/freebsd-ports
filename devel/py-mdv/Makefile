# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/devel/py-mdv/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	mdv
PORTVERSION=	1.6.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Terminal markdown viewer

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}docopt>0:devel/py-docopt@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}markdown>=2.0.3:textproc/py-markdown@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yaml>0:devel/py-yaml@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
