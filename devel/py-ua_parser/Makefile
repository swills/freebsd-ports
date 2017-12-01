# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/devel/py-ua_parser/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	ua_parser
PORTVERSION=	0.7.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:S/_/-/}-${PORTVERSION}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Python port of Browserscope's user agent parser

LICENSE=	APACHE20

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/yaml/__init__.py:devel/py-yaml@${FLAVOR}
RUN_DEPENDS=	${LOCALBASE}/share/ua_parser/regexes.yaml:devel/ua_parser-core \
		${PYTHON_SITELIBDIR}/yaml/__init__.py:devel/py-yaml@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
SUB_FILES=	pkg-message

.include <bsd.port.mk>
