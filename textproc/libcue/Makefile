# Created by: buganini@gmail.com
# $FreeBSD: head/textproc/libcue/Makefile 424427 2016-10-21 15:21:13Z mat $

PORTNAME=	libcue
PORTVERSION=	2.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc

MAINTAINER=	buganini@gmail.com
COMMENT=	CUE Sheet Parser Library

LICENSE=	BSD2CLAUSE GPLv2
LICENSE_COMB=	multi

BUILD_DEPENDS=	${LOCALBASE}/bin/flex:textproc/flex

USE_GITHUB=	yes
GH_ACCOUNT=	lipnitsk

USE_LDCONFIG=	yes
USES=		bison cmake:outsource pathfix

.include <bsd.port.mk>
