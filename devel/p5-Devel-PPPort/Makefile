# Created by: mat
# $FreeBSD: head/devel/p5-Devel-PPPort/Makefile 467915 2018-04-22 07:05:25Z wen $

PORTNAME=	Devel-PPPort
PORTVERSION=	3.42
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl/Pollution/Portability

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Devel/PPPort/PPPort.so

.include <bsd.port.mk>
