# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/converters/p5-Unicode-IMAPUtf7/Makefile 483807 2018-11-02 13:32:34Z rene $

PORTNAME=	Unicode-IMAPUtf7
PORTVERSION=	2.01
PORTREVISION=	2
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:FABPOT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to deal with IMAP UTF-7

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Unicode-String>=0:converters/p5-Unicode-String
RUN_DEPENDS=	p5-Unicode-String>=0:converters/p5-Unicode-String

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
