# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/devel/p5-Date-Holidays-DK/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Date-Holidays-DK
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Determine Danish public holidays

BUILD_DEPENDS=	p5-Date-Simple>=0:devel/p5-Date-Simple \
		p5-Date-Easter>=0:devel/p5-Date-Easter
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
