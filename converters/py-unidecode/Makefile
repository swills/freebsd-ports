# Created by: Douglas Thrift <douglas@douglasthrift.net>
# $FreeBSD: head/converters/py-unidecode/Makefile 466155 2018-04-01 13:42:55Z dbaio $

PORTNAME=	unidecode
PORTVERSION=	1.0.22
CATEGORIES=	converters python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Unidecode-${PORTVERSION}

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	ASCII transliterations of Unicode text

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python
USE_PYTHON=	distutils autoplist concurrent
NO_ARCH=	yes

.include <bsd.port.mk>
