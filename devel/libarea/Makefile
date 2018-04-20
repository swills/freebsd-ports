# Created by: Pedro Giffuni
# $FreeBSD: head/devel/libarea/Makefile 467711 2018-04-18 13:57:42Z jbeich $

PORTNAME=	libarea
PORTVERSION=	20160313
PORTREVISION=	7
CATEGORIES=	devel cad

MAINTAINER=	pfg@FreeBSD.org
COMMENT=	CAM-related software for profile and pocketing operations

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	${PY_BOOST}

USE_GITHUB=	yes
GH_ACCOUNT=	Heeks
GH_TAGNAME=	f1986ac

USES=		cmake:outsource python
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} 's,COMMAND python ,COMMAND ${PYTHON_CMD} , ; \
		s,COMMAND python-config ,COMMAND ${PYTHON_CMD}-config ,' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
