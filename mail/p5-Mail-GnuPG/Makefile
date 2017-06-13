# Created by: clsung@dragon2.net
# $FreeBSD: head/mail/p5-Mail-GnuPG/Makefile 413981 2016-04-25 09:10:28Z sunpoet $

PORTNAME=	Mail-GnuPG
PORTVERSION=	0.23
CATEGORIES=	mail security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to process and/or create PGP email

BUILD_DEPENDS=	p5-GnuPG-Interface>=0:security/p5-GnuPG-Interface \
		p5-MIME-Tools>=0:mail/p5-MIME-Tools \
		p5-Mail-Tools>=0:mail/p5-Mail-Tools
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
