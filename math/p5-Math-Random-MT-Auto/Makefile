# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/math/p5-Math-Random-MT-Auto/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Math-Random-MT-Auto
PORTVERSION=	6.22
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Auto-seeded Mersenne Twister PRNGs

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Exception-Class>=1.32:devel/p5-Exception-Class \
		p5-Object-InsideOut>=3.88:devel/p5-Object-InsideOut
TEST_DEPENDS=	p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
