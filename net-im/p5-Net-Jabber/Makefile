# Created by: Yen-Ming Lee <leeym@cae.ce.ntu.edu.tw>
# $FreeBSD: head/net-im/p5-Net-Jabber/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Net-Jabber
PORTVERSION=	2.0
PORTREVISION=	1
CATEGORIES=	net-im perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DIST_SUBDIR=	jabber

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Net::Jabber provides Perl Developer access to the Jabber protocol

BUILD_DEPENDS=	p5-Net-XMPP>=0:net-im/p5-Net-XMPP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
