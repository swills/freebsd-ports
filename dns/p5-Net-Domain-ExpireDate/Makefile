# Created by: clsung
# $FreeBSD: head/dns/p5-Net-Domain-ExpireDate/Makefile 437889 2017-04-06 21:56:38Z sunpoet $

PORTNAME=	Net-Domain-ExpireDate
PORTVERSION=	1.19
CATEGORIES=	dns net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module obtain expiration date of domain names

BUILD_DEPENDS=	p5-Net-Whois-Raw>=0:net/p5-Net-Whois-Raw
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
