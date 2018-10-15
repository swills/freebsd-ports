# Created by: Felippe de Meirelles Motta <lippemail@gmail.com>
# $FreeBSD: head/devel/p5-Test-Kwalitee/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Test-Kwalitee
PORTVERSION=	1.27
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Test the Kwalitee of a distribution before you release it

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Module-CPANTS-Analyse>=0.92:devel/p5-Module-CPANTS-Analyse
TEST_DEPENDS=	p5-CPAN-Meta-Check>=0.011:devel/p5-CPAN-Meta-Check \
		p5-Test-Deep>0:devel/p5-Test-Deep \
		p5-Test-Warnings>=0.009:devel/p5-Test-Warnings

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
