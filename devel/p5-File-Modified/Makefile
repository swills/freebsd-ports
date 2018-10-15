# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/devel/p5-File-Modified/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	File-Modified
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for checking intelligently if files have changed

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Digest-SHA1>=0:security/p5-Digest-SHA1

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
