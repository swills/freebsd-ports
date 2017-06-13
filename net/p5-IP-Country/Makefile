# Created by: dikshie <dikshie@lapi.itb.ac.id>
# $FreeBSD: head/net/p5-IP-Country/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	IP-Country
PORTVERSION=	2.28
PORTREVISION=	1
CATEGORIES=	net perl5 geography
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dikshie@lapi.itb.ac.id
COMMENT=	Fast lookup of country codes from IP addresses

BUILD_DEPENDS=	p5-Geography-Countries>=0:misc/p5-Geography-Countries
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
