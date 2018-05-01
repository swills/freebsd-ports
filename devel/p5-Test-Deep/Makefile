# Created by: Alex Kapranoff <alex@kapranoff.ru>
# $FreeBSD: head/devel/p5-Test-Deep/Makefile 467982 2018-04-22 08:55:19Z sunpoet $

PORTNAME=	Test-Deep
PORTVERSION=	1.128
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test data structures for differences deeply

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

NO_ARCH=	yes
REINPLACE_ARGS=	-i ''
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e '/return (/s/;/);/' ${WRKSRC}/lib/Test/Deep/RegexpOnly.pm

.include <bsd.port.mk>
