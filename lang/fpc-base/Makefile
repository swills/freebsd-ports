# Created by: John Merryweather Cooper <coop9211@uidaho.edu>
# $FreeBSD: head/lang/fpc-base/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	base
PORTVERSION=	3.0.4
PORTREVISION=	1
CATEGORIES=	lang
PKGNAMEPREFIX=	fpc-

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Meta package to install all of the Free Pascal base

USES=		fpc:base metaport

OPTIONS_DEFINE=	DOCS

DOCS_RUN_DEPENDS=	${LOCALBASE}/share/doc/fpdocs-${PORTVERSION}/user.pdf:lang/fpc-docs

.include <bsd.port.mk>
