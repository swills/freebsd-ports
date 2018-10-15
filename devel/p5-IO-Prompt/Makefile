# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-IO-Prompt/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	IO-Prompt
PORTVERSION=	0.997004
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interactively prompt for user input

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Term-ReadKey>0:devel/p5-Term-ReadKey \
		p5-Want>0:devel/p5-Want

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
