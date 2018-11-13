# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/databases/rubygem-hiredis/Makefile 484734 2018-11-11 18:21:45Z sunpoet $

PORTNAME=	hiredis
PORTVERSION=	0.6.3
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
