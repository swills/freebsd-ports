# Created by: Lars Eggert <lars.eggert@gmx.net>
# $FreeBSD: head/net-im/p5-Net-XMPP/Makefile 444676 2017-06-29 19:14:03Z sunpoet $

PORTNAME=	Net-XMPP
PORTVERSION=	1.05
PORTREVISION=	1
CATEGORIES=	net-im perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Net::XMPP provides Perl Developer access to the XMPP protocol

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Authen-SASL>=2.12:security/p5-Authen-SASL \
		p5-XML-Stream>=1.24:textproc/p5-XML-Stream
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-LWP-Online>=1.07:www/p5-LWP-Online \
		p5-YAML-Tiny>=1.41:textproc/p5-YAML-Tiny

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
