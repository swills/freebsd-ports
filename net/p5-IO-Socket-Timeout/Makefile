# $FreeBSD: head/net/p5-IO-Socket-Timeout/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	IO-Socket-Timeout
PORTVERSION=	0.32
PORTREVISION=	1
CATEGORIES=	net ipv6 perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pi@FreeBSD.org
COMMENT=	IO::Socket with read/write timeout

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-PerlIO-via-Timeout>=0.32:devel/p5-PerlIO-via-Timeout
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
