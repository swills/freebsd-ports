# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/net-im/p5-Jabber-SimpleSend/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Jabber-SimpleSend
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	net-im perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Send a Jabber message simply

RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww \
		p5-Net-Jabber>=0:net-im/p5-Net-Jabber
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
