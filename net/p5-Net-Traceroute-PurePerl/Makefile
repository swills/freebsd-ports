# Created by: jupengfei <jupengfei@gmail.com>
# $FreeBSD: head/net/p5-Net-Traceroute-PurePerl/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Net-Traceroute-PurePerl
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Traceroute(1) functionality in perl via raw sockets

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-Traceroute>=0:net/p5-Net-Traceroute
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
