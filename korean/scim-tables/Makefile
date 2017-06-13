# Created by: Jie Gao	<gaoj@cpsc.ucalgary.ca>
# $FreeBSD: head/korean/scim-tables/Makefile 412347 2016-04-01 14:08:37Z mat $
#    $MCom: ports/korean/scim-tables/Makefile,v 1.1 2006/09/30 03:44:11 ahze Exp $
PORTNAME=	scim-tables
PORTVERSION=	0.5.10
PORTREVISION=	1
CATEGORIES=	korean
MASTER_SITES=	SF/scim/${PORTNAME}/${PORTVERSION}

MAINTAINER=	lx@FreeBSD.org
COMMENT=	SCIM table based Korean input methods

BUILD_DEPENDS=	scim-make-table:textproc/scim-table-imengine
RUN_DEPENDS=	scim-make-table:textproc/scim-table-imengine

GNU_CONFIGURE=	yes
USES=		pkgconfig gmake

.include <bsd.port.mk>
