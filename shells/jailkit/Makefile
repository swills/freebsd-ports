# Created by: Sylvio Cesar <sylvio@FreeBSD.org>
# $FreeBSD$

PORTNAME=	jailkit
PORTVERSION=	2.19
PORTREVISION=	1
CATEGORIES=	shells
MASTER_SITES=	http://olivier.sessink.nl/jailkit/ \
		http://www.sfr-fresh.com/unix/privat/

MAINTAINER=	woodsb02@FreeBSD.org
COMMENT=	Utilities to limit user accounts to specific files and/or commands

LICENSE=	BSD3CLAUSE

OPTIONS_DEFINE=	PROCMAIL
OPTIONS_SUB=	yes

USES=		python:2.7
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	PYTHONINTERPRETER=${PYTHON_CMD}

PORTDOCS=	COPYRIGHT README.txt

PROCMAIL_CONFIGURE_ENV_OFF=	ac_cv_path_PROCMAILPATH=no
PROCMAIL_BUILD_DEPENDS=	procmail:mail/procmail
PROCMAIL_RUN_DEPENDS=	procmail:mail/procmail

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/jk_uchroot \
		${STAGEDIR}${PREFIX}/sbin/jk_socketd \
		${STAGEDIR}${PREFIX}/sbin/jk_chrootlaunch \
		${STAGEDIR}${PREFIX}/sbin/jk_chrootsh \
		${STAGEDIR}${PREFIX}/sbin/jk_lsh

.include <bsd.port.mk>
