# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/dns/p5-DNS-EasyDNS/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	DNS-EasyDNS
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Update your EasyDNS dynamic DNS entries

BUILD_DEPENDS=	p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	EXAMPLES

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
