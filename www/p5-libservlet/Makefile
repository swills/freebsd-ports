# Created by: ijliao
# $FreeBSD: head/www/p5-libservlet/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	libservlet
PORTVERSION=	0.9.2
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	SF
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Servlet API for Perl

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Exception-Class>=0:devel/p5-Exception-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
