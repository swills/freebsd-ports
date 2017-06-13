# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/net/p5-Net-PcapUtils/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Net-PcapUtils
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Utility routines for Net::Pcap module

BUILD_DEPENDS=	p5-Net-Pcap>=0:net/p5-Net-Pcap
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
