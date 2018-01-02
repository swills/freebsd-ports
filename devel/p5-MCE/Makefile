# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: head/devel/p5-MCE/Makefile 457526 2017-12-29 18:47:31Z sunpoet $

PORTNAME=	MCE
PORTVERSION=	1.833
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MARIOROY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Many-Core Engine for Perl providing parallel processing capabilities

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/LICENSE
LICENSE_FILE_GPLv1+ =	${WRKSRC}/Copying

PORTSCOUT=	limit:^[0-9\.]*$$

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
