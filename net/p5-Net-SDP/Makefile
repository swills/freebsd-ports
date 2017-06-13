# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/net/p5-Net-SDP/Makefile 432932 2017-01-31 16:21:45Z mat $

PORTNAME=	Net-SDP
PORTVERSION=	0.07
PORTREVISION=	2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Session Description Protocol (RFC 2327) packet parser/generator

BUILD_DEPENDS=	p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
