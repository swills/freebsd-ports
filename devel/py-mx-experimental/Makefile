# Created by: ijliao
# $FreeBSD: head/devel/py-mx-experimental/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	mx-experimental
PORTVERSION=	3.0.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	http://downloads.egenix.com/python/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	egenix-${PORTNAME}-${PORTVERSION}

MAINTAINER=	sergio@softshark.org
COMMENT=	The eGenix mx Extensions - EXPERIMENTAL Package

BUILD_DEPENDS=	${LOCALBASE}/include/gmp.h:math/gmp
#RUN_DEPENDS=	${PYTHON_SITELIBDIR}/mx/BeeBase/BeeBase.py:lang/py-mx-base

USES=		python
USE_PYTHON=	distutils
PYDISTUTILS_PKGNAME=	egenix-mx-experimental

post-patch:
	@${REINPLACE_CMD} -e "s|LIBGMPH|${PREFIX}/include|" ${WRKSRC}/mxEXPERIMENTAL.py
	@${REINPLACE_CMD} \
		-e 's,distutils\.command\.install ,setuptools\.command\.install ,' \
		${WRKSRC}/mxSetup.py

.include <bsd.port.mk>
