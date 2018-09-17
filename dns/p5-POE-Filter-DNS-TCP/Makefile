# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/dns/p5-POE-Filter-DNS-TCP/Makefile 479861 2018-09-16 00:07:20Z sunpoet $

PORTNAME=	POE-Filter-DNS-TCP
PORTVERSION=	0.06
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE Filter to handle DNS over TCP connections

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Net-DNS>=0.66:dns/p5-Net-DNS \
		p5-POE>=1.311:devel/p5-POE

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
