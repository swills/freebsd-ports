# Created by: Jaap Akkerhuis <jaap@NLnetLabs.nl>
# $FreeBSD$

PORTNAME=	opendmarc
PORTVERSION=	1.4.0
CATEGORIES=	mail security

MAINTAINER=	freebsd@gushi.org
COMMENT=	DMARC library and milter implementation

LICENSE=	BSD3CLAUSE SENDMAIL
LICENSE_COMB=	multi

RUN_DEPENDS=	p5-Switch>=0:lang/p5-Switch \
		p5-DBI>=0:databases/p5-DBI \
		p5-DBD-mysql>=0:databases/p5-DBD-mysql \
		p5-HTTP-Message>=0:www/p5-HTTP-Message

LICENSE_FILE_SENDMAIL=	${WRKSRC}/LICENSE.Sendmail
LICENSE_GROUPS_SENDMAIL=	FSF OSI
LICENSE_NAME_SENDMAIL=	Sendmail Open Source License
LICENSE_PERMS_SENDMAIL=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		autoreconf perl5 shebangfix
USE_LDCONFIG=	yes
USE_RC_SUBR=	opendmarc

USE_GITHUB=	yes
GH_ACCOUNT=	trusteddomainproject
GH_PROJECT=	OpenDMARC
GH_TAGNAME=	rel-${PORTNAME}-${DISTVERSION:S/./-/g}

PATCH_SITES=    https://github.com/${GH_ACCOUNT}/${PORTNAME}/commit/
PATCHFILES=     a46c89a96ad73adc704a50242b35c4fa4737600f.patch:-p1 \
		c27bc3a028b7ac4d9f82a246943b1adf55891307.patch:-p1 \
		478b3be5ced071c436f7b09e70652b0c490edb0f.patch:-p1

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=		SPF DOCS
OPTIONS_DEFAULT=	SPF

SPF_DESC=		Enable support for SPF record checking

SPF_LIB_DEPENDS=	libspf2.so:mail/libspf2
SPF_CONFIGURE_ON=	--with-spf \
			--with-spf2-include=${LOCALBASE}/include/spf2 \
			--with-spf2-lib=${LOCALBASE}/lib

SHEBANG_FILES=	reports/opendmarc-expire.in \
		reports/opendmarc-import.in \
		reports/opendmarc-params.in \
		reports/opendmarc-reports.in

PORTDOCS=	*

.include <bsd.port.pre.mk>

.include "${PORTSDIR}/mail/sendmail/bsd.milter.mk"
CONFIGURE_ARGS+=	--with-milter=${MILTERBASE}

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/mail
	${INSTALL_DATA} \
		${WRKSRC}/opendmarc/opendmarc.conf.sample ${STAGEDIR}${PREFIX}/etc/mail
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libopendmarc.so.2

.include <bsd.port.post.mk>
