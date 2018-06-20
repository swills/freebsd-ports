# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: head/net/py-libcloud/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	libcloud
PORTVERSION=	2.3.0
CATEGORIES=	net python
MASTER_SITES=	APACHE/${PORTNAME}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	apache-${PORTNAME}-${PORTVERSION}

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Standard client library for many popular cloud providers

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-runner>=0:devel/py-pytest-runner@${PY_FLAVOR}

NO_ARCH=	yes

USES=		cpe python tar:bzip2
USE_PYTHON=	distutils autoplist
CPE_VENDOR=	apache

post-extract:
	@${MV} ${WRKSRC}/libcloud/test ${WRKSRC}/test # no need to install tests

.include <bsd.port.mk>
