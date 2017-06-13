# Created by: Denis Pokataev <catone@cpan.org>
# $FreeBSD: head/net/p5-XML-RPC/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	XML-RPC
PORTVERSION=	0.9
PORTREVISION=	2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Pure Perl implementation for an XML-RPC client and server

BUILD_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-XML-TreePP>=0:textproc/p5-XML-TreePP
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-XML-TreePP>=0:textproc/p5-XML-TreePP

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
