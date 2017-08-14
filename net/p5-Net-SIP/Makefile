# Created by: Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
# $FreeBSD: head/net/p5-Net-SIP/Makefile 447799 2017-08-11 21:38:41Z sunpoet $

PORTNAME=	Net-SIP
PORTVERSION=	0.810
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Framework SIP (Voice Over IP, RFC3261)

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-DNS>=0.56:dns/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
