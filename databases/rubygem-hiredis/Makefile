# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/databases/rubygem-hiredis/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	hiredis
PORTVERSION=	0.6.3
PORTREVISION=	1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby wrapper for hiredis

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	redis>=0:databases/redis

USES=		gem gmake
USE_RUBY=	yes

.include <bsd.port.mk>
