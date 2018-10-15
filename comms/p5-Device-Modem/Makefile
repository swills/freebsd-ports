# Created by: Anders Nordby <anders@FreeBSD.org>
# $FreeBSD: head/comms/p5-Device-Modem/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Device-Modem
PORTVERSION=	1.57
PORTREVISION=	2
CATEGORIES=	comms perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl class to interface generic modems (AT-compliant)

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Device-SerialPort>=0:comms/p5-Device-SerialPort

USES=		perl5 shebangfix
SHEBANG_FILES=	examples/xmodem.pl \
		examples/shell.pl \
		examples/caller-id.pl
USE_PERL5=	configure
NO_ARCH=	yes

OPTIONS_DEFINE=	EXAMPLES

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/examples/*.pl ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
